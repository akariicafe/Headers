@class NSArray;

@interface REMClockElementList : NSObject

@property (copy, nonatomic) NSArray *elements;

+ (long long)compareList:(id)a0 toList:(id)a1;
+ (BOOL)list:(id)a0 isCompatibleToList:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)encodeIntoEntryArchive:(void *)a0;
- (id)initWithCRVectorTimestampElements:(id)a0;
- (id)initWithEntryArchive:(const void *)a0;
- (id)initWithTTVectorTimestampElements:(id)a0;

@end
