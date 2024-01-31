@class NSString, NSMutableSet;

@interface SXComponentNode : NSObject {
    NSString *_componentIdentifier;
    long long _attribute;
    NSMutableSet *_mutableDependencies;
    NSMutableSet *_toPositionDependencies;
    NSMutableSet *_toSizeDependencies;
}

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
