@class NSString, __end_cap_, __end_;

@interface TSCEGetPivotDataBundle : NSObject {
    struct vector<NSString *, std::allocator<NSString *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<NSString *__strong *, std::allocator<NSString *>> { id *__value_; } x1; } _dataFields;
    struct vector<TSCEValue, std::allocator<TSCEValue>> { struct TSCEValue *__begin_; struct TSCEValue *__end_; struct __compressed_pair<TSCEValue *, std::allocator<TSCEValue>> { struct TSCEValue *__value_; } __end_cap_; } _dataValues;
    struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long __value_; } __cap_alloc_; } _missingGroupingColumn;
}

@property (retain, nonatomic) NSString *aggregateFieldName;
@property (readonly, nonatomic) unsigned long long keyValuePairCount;
@property (nonatomic) unsigned short aggregateIndex;
@property (nonatomic) unsigned char aggregateType;
@property (nonatomic) unsigned char showAsType;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (void)addDataField:(id)a0 withValue:(const struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; } *)a1;
- (void)enumerateDataKeyValuePairsUsingBlock:(id /* block */)a0;
- (unsigned long long)firstMissingDataField;
- (void)setMissingDataFieldAtIndex:(unsigned long long)a0;

@end
