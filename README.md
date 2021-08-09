# AppUIKit

    git指令
    git add -A && git commit -m ""
    git push origin master
    git tag 0.0.2
    git push origin 0.0.2

    关联远程配置文件
    cd ~/.cocoapods/repos
    pod repo add Config https://github.com/HKFoundation/Config.git
    
    验证私有库
    pod spec lint --sources='https://github.com/HKFoundation/Config.git,https://github.com/CocoaPods/Specs.git'
    
    将私有库放到远程索引库中
    pod repo push Config AppUIKit.podspec
