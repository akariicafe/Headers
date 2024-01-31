@class NSArray, NSString;

@interface ICCRTuple : NSObject <ICCRDataType, ICCRCoding>

@property (retain, nonatomic) NSArray *contents;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tupleWithArray:(id)a0;

- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)tombstone;
- (void)realizeLocalChangesIn:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)setDocument:(id)a0;
- (void).cxx_destruct;
- (void)mergeWith:(id)a0;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithICCRCoder:(id)a0;
- (id)initWithICCRCoder:(id)a0;

@end
