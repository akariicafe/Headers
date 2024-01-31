@class NSString, NSDictionary, NSArray;

@interface MTLStructTypeInternal : MTLStructType {
    unsigned long long _dataType;
    NSDictionary *_dictionary;
    NSArray *_members;
}

@property BOOL isIndirectArgumentBuffer;
@property (readonly) NSString *typeName;

- (id)formattedDescription:(unsigned long long)a0;
- (id)members;
- (unsigned long long)dataType;
- (id)init;
- (void)dealloc;
- (id)memberByName:(id)a0;
- (id)description;
- (BOOL)isStructLayoutThreadSafeWith:(id)a0;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1 typeName:(id)a2;
- (void)setMembers:(id *)a0 count:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;

@end
