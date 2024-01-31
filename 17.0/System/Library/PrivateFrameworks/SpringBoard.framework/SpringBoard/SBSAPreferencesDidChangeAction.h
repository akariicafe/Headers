@class NSArray, NSString;

@interface SBSAPreferencesDidChangeAction : NSObject <SBSAActionRepresenting>

@property (readonly, copy, nonatomic) NSArray *reasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReasons:(id)a0;

@end
