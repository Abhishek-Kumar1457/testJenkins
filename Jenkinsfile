pipeline {
    agent {docker { image 'kernelci/build-gcc-7_arm:3.3.3' } }
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
