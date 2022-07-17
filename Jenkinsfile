pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
              echo 'Starting Build'
              sh 'echo "jenkins@321" |sudo apt install gcc -y -S'
            }
        }
        stage('Test') {
            steps {
                echo 'Starting Test'
            }
        }
        
    }
}
