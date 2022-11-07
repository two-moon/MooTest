Pod::Spec.new do |spec|

  spec.name         = "MoonKit"
  spec.version      = "0.0.1"
  spec.summary      = "MoonKit"

  spec.homepage        = "https://github.com/two-moon/MooTest.git"

  spec.license        = "MIT" 
  spec.authors        = { "two-moon" => "1020324999@qq.com" }

  spec.platform     = :ios, "11.0"
  spec.ios.deployment_target = "11.0"

  spec.source = { :git => "https://github.com/two-moon/MooTest.git", :tag => "#{spec.version}" }

  spec.source_files = "MoonKit/SeelKit.framework/Headers/*.{h,m,plist}"
  


end
