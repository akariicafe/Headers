@class NSString;

@interface INHelperServiceAccessSpecifier : NSObject

@property (readonly, nonatomic) unsigned long long accessLevel;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;

+ (void)initialize;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierAppropriateForCurrentProcess;
+ (id)accessSpecifierAppropriateForXPCConnection:(id)a0;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithAccessLevel:(unsigned long long)a0 associatedAppBundleIdentifier:(id)a1;

@end
