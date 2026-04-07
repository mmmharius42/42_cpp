git filter-branch --env-filter '
case "$GIT_AUTHOR_NAME" in
    "Marius"|"mpapin"|"pet-foireux")
        export GIT_AUTHOR_NAME="mmmharius"
        export GIT_AUTHOR_EMAIL="mariuspapin@rcmm.fr"
    ;;
esac

case "$GIT_COMMITTER_NAME" in
    "Marius"|"mpapin"|"pet-foireux")
        export GIT_COMMITTER_NAME="mmmharius"
        export GIT_COMMITTER_EMAIL="mariuspapin@rcmm.fr"
    ;;
esac
' HEAD
