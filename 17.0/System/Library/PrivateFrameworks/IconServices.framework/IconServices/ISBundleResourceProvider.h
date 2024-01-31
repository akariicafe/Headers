@class NSURL, NSDictionary, NSString;

@interface ISBundleResourceProvider : ISResourceProvider

@property (retain) NSURL *bundleURL;
@property (retain) NSDictionary *iconDictionary;
@property unsigned long long options;
@property (retain) NSString *templateType;

- (id)symbol;
- (id)description;
- (void).cxx_destruct;
- (id)resourceNamed:(id)a0;
- (BOOL)_isAppleResource;
- (id)iconResource;
- (id)initWithBundle:(id)a0 options:(unsigned long long)a1;
- (id)initWithBundleURL:(id)a0 iconDictionary:(id)a1 options:(unsigned long long)a2;
- (void)resolveResources;

@end
