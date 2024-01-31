@interface PCPersistentIdentifiers : NSObject

+ (id)_processNamePrefix;
+ (id)processNamePidAndStringIdentifier:(id)a0;
+ (int)pidFromMatchingIdentifer:(id)a0;
+ (unsigned long long)hostUniqueIdentifier;
+ (id)processNameAndPidIdentifier;

@end
