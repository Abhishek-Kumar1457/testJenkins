pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
              echo 'Starting Build'
              sh 'gcc prog.c'
            }
        }
        stage('Test') {
            steps {
                echo 'Starting Test'
            }
        }
        
    }
}
