@class NSString;

@interface OpenURLTarget : NSObject {
    unsigned int _applicationState;
    struct { NSString *clientIdentifier; NSString *normalScheme; NSString *secureScheme; } _targetData;
    long long _targetIndex;
}

- (id)init;
- (long long)compare:(id)a0;
- (id)description;
- (id)initWithTargetIdentifier:(id)a0;
- (id)copyURLForURL:(id)a0;

@end
