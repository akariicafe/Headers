@class NSString, NSSet;

@interface MIPersonaAttributes : NSObject

@property (readonly, copy, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) unsigned long long personaType;
@property (readonly, copy, nonatomic) NSSet *bundleIDs;

- (void).cxx_destruct;
- (id)initWithPersonaString:(id)a0 personaType:(unsigned long long)a1 associatedBundleIDs:(id)a2;

@end
