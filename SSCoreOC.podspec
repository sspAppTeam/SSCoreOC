#
# Be sure to run `pod lib lint SSCoreOC.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'SSCoreOC'
  s.version          = '0.1.3'
  s.summary          = '基础类库'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
base ,分类 等
                       DESC

  s.homepage         = 'https://github.com/sspAppTeam/SSCoreOC'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'SSPSource' => '2316585240@qq.com' }
  s.source           = { :git => 'https://github.com/sspAppTeam/SSCoreOC.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'SSCoreOC/Classes/**/*'
#  自动创建SSCoreOCImg.bundle
# 注意：#use_frameworks! 不同，bundle加载路径不同
#s.resources = 'xxx/xxx/x.png'
   s.resource_bundles = {
     'SSCoreOCImg' => ['SSCoreOC/Assets/*']
   }
#   s.resources = ['SSCoreOC/Assets/*']

  # s.public_header_files = 'Pod/Classes/**/*.h'
    s.frameworks = 'UIKit'
   s.dependency 'SDWebImage'
end
#加载资源文件有两种方式
#s.resources = 'xxx/xxx/x.png'（下面我们称之为1方式）
#s.resource_boudles = {
#'xxx' => ['xxx/xxx/.png']
#} ；（2方式）
#主要1方式会复制资源文件到目标工程，2方式会建立对应的bundle，把资源文件放进bundle里；但是他们还和pod集成方式有关即use_frameworks! 以什么方式集成（一般情况下swift必须以动态库的方式集成，Objc以静态库的方式集成）下面说明动态库集成和非动态库集成对于两种方式加载资源文件的影响。
#用非use_frameworks!的方式集成
#用当前方式集成的三方库为静态库；如果用1中方式加载的话，会将资源文件拷贝到目标文件，用2方式会在目标根目录生成对应bundle，资源文件放在bundle里；
#用use_frameworks!的方式集成
#用1方式加载，会在根目录生成对应的三方库.framework,资源问价会拷贝到此目录下。
#用2方式加载， 会在三方库.framework 中生成对应bundle文件，资源文件放在bundle里。
#两种方式对于use_frameworks!和非use_frameworks!的加载其实方式一样，但是注意根目录不一样。

