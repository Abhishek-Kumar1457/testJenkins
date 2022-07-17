pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
              echo 'Starting Build'
              sh 'sudo apt install gcc -y'
            }
        }
        stage('Test') {
            steps {
                echo 'Starting Test'
            }
        }
        
    }
}
