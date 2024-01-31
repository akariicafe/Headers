@class NSString;

@interface GKFamiliarPlayerInternal : GKPlayerInternal {
    NSString *_firstName;
    NSString *_lastName;
    NSString *_compositeName;
}

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (id)firstName;
- (void)setFirstName:(id)a0;
- (id)lastName;
- (void)setLastName:(id)a0;
- (void).cxx_destruct;
- (id)compositeName;
- (void)setCompositeName:(id)a0;

@end
