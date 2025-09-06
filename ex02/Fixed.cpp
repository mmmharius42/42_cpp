/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 02:48:23 by mpapin            #+#    #+#             */
/*   Updated: 2025/09/06 03:30:56 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointValue(0) {}

Fixed::Fixed(const Fixed& other) {
     *this = other; }

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        this->_fixedPointValue = other._fixedPointValue;
    }
    return *this; }

Fixed::~Fixed(void) {}

Fixed::Fixed(const int value) {
    _fixedPointValue = value << _fractionalBits; }

Fixed::Fixed(const float value) {
    float scaled = value * (1 << _fractionalBits);
    _fixedPointValue = (int)roundf(scaled); }

int Fixed::getRawBits(void) const {
    return _fixedPointValue; }

void Fixed::setRawBits(int const raw) {
    _fixedPointValue = raw; }

float Fixed::toFloat(void) const {
    return (float)_fixedPointValue / (1 << _fractionalBits); }
    
int Fixed::toInt(void) const {
    return _fixedPointValue >> _fractionalBits; }

bool Fixed::operator>(const Fixed& other) const {
    return _fixedPointValue > other._fixedPointValue; }
    
bool Fixed::operator<(const Fixed& other) const {
    return _fixedPointValue < other._fixedPointValue; }
    
bool Fixed::operator>=(const Fixed& other) const {
    return _fixedPointValue >= other._fixedPointValue; }
    
bool Fixed::operator<=(const Fixed& other) const {
    return _fixedPointValue <= other._fixedPointValue; }
    
bool Fixed::operator==(const Fixed& other) const {
    return _fixedPointValue == other._fixedPointValue; }
    
bool Fixed::operator!=(const Fixed& other) const {
    return _fixedPointValue != other._fixedPointValue; }
    
Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat()); }
    
Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat()); }
    
Fixed Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat()); }
    
Fixed Fixed::operator/(const Fixed& other) const {
    return Fixed(this->toFloat() / other.toFloat()); }

Fixed& Fixed::operator++() {
    _fixedPointValue++; return *this; }

Fixed Fixed::operator++(int) {
    Fixed tmp(*this); _fixedPointValue++; return tmp; }

Fixed& Fixed::operator--() {
    _fixedPointValue--; return *this; }

Fixed Fixed::operator--(int) {
    Fixed tmp(*this); _fixedPointValue--; return tmp; }

Fixed& Fixed::min(Fixed& a, Fixed& b){
    return (a < b ? a : b); }

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b ? a : b); }

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b ? a : b); }

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) { return (a > b ? a : b); }

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out; }
