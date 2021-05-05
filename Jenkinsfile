pipeline {
    agent any

    stages {
    stage('Name') {
            steps {
                echo 'Ian Brinkerhoff'
            }
        }
        stage('Verify Branch') {
            steps {
                echo "$GIT_BRANCH"
            }
        }
    }
}
