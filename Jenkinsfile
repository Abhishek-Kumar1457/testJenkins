pipeline {
    agent {docker { image 'kernelci/build-gcc-7_arm:3.3.3' } }
    stages {
        stage('Build') {
            steps {
              echo 'Starting Build'
              sh 'gcc --version'
            }
        }
        stage('Test') {
            steps {
                echo 'Starting Test'
            }
        }
        
    }
}
