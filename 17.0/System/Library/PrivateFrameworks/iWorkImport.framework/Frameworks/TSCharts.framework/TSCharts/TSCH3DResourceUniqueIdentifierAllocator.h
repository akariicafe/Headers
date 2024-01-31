@interface TSCH3DResourceUniqueIdentifierAllocator : NSObject

+ (unsigned long long)allocateResourceUniqueIdentifier;
+ (void)deallocateResourceUniqueIdentifier:(unsigned long long)a0;

@end
