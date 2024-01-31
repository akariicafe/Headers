@interface _PASLazyPlist : NSObject

+ (id)fileBackedDataWithPropertyList:(id)a0 writtenToPath:(id)a1 error:(id *)a2;
+ (id)propertyListWithPath:(id)a0 error:(id *)a1;
+ (id)dataWithPropertyList:(id)a0 error:(id *)a1;
+ (id)dictionaryWithPath:(id)a0 error:(id *)a1;
+ (id)dataWithPropertyList:(id)a0 format:(unsigned long long)a1 error:(id *)a2;
+ (id)dictionaryWithData:(id)a0 error:(id *)a1;
+ (id)lazyPlistWithPlist:(id)a0;
+ (id)lazyPlistArrayWithPlistArray:(id)a0;
+ (id)propertyListWithPath:(id)a0 fileRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 error:(id *)a2;
+ (id /* block */)deserializationStatsHandler;
+ (id)fileBackedDataWithPropertyList:(id)a0 appendedToFd:(int)a1 format:(unsigned long long)a2 startOfs:(long long *)a3 error:(id *)a4;
+ (void)setDeserializationStatsHandler:(id /* block */)a0;
+ (id)fileBackedDataWithPropertyList:(id)a0 writtenToPath:(id)a1 format:(unsigned long long)a2 error:(id *)a3;
+ (BOOL)isLazyPlistLikelyContainedInFileAtPath:(id)a0 format:(unsigned long long *)a1;
+ (id)arrayWithData:(id)a0 error:(id *)a1;
+ (void)setSerializationStatsHandler:(id /* block */)a0;
+ (BOOL)isLazyPlistLikelyContainedInData:(id)a0 format:(unsigned long long *)a1;
+ (id)lazyPlistDictionaryWithPlistDictionary:(id)a0;
+ (id)propertyListWithData:(id)a0 error:(id *)a1;
+ (id)arrayWithPath:(id)a0 error:(id *)a1;
+ (id /* block */)serializationStatsHandler;
+ (id)fileBackedDataWithPropertyList:(id)a0 appendedToFd:(int)a1 startOfs:(long long *)a2 error:(id *)a3;

- (id)init;

@end
