@class NSString, NSURL;

@interface IntelligencePlatformCore.ViewAccessAssertion : NSObject <GDViewAccessAssertion> {
    void /* unknown type, empty encoding */ viewName;
    void /* unknown type, empty encoding */ viewArtifactURL;
    void /* unknown type, empty encoding */ viewArtifactTableName;
}

@property (nonatomic, readonly) NSString *viewName;
@property (nonatomic, readonly) NSURL *viewArtifactURL;
@property (nonatomic, readonly) NSString *viewArtifactTableName;

- (id)init;
- (void).cxx_destruct;

@end
