@class NSString;

@interface CLSInformant : NSObject

@property (readonly, copy, nonatomic) NSString *uuid;

+ (id)identifier;
+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;
+ (id)supportedOutputClueKeys;

- (id)init;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)gatherCluesForInvestigation:(id)a0 progressBlock:(id /* block */)a1;

@end
