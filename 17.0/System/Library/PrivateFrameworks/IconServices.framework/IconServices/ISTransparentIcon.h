@class ISResourceProvider;

@interface ISTransparentIcon : ISConcreteIcon {
    ISResourceProvider *_resourceProvider;
}

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)makeResourceProvider;
- (id)initWithCoder:(id)a0;

@end
