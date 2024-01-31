@class NSString, NSMutableDictionary, _bmFMDatabase, _bmFMStatement, NSDictionary;

@interface _bmFMResultSet : NSObject {
    NSMutableDictionary *_columnNameToIndexMap;
}

@property (nonatomic) BOOL shouldAutoClose;
@property (retain, nonatomic) _bmFMDatabase *parentDB;
@property (retain) NSString *query;
@property (readonly) NSMutableDictionary *columnNameToIndexMap;
@property (retain) _bmFMStatement *statement;
@property (readonly, nonatomic) int columnCount;
@property (readonly, nonatomic) NSDictionary *resultDictionary;

+ (id)resultSetWithStatement:(id)a0 usingParentDatabase:(id)a1 shouldAutoClose:(BOOL)a2;

- (id)stringForColumnIndex:(int)a0;
- (id)dataForColumnIndex:(int)a0;
- (void)close;
- (int)intForColumnIndex:(int)a0;
- (double)doubleForColumnIndex:(int)a0;
- (void)dealloc;
- (id)objectAtIndexedSubscript:(int)a0;
- (BOOL)next;
- (void).cxx_destruct;
- (BOOL)step;
- (id)objectForKeyedSubscript:(id)a0;
- (id)dateForColumnIndex:(int)a0;
- (id)objectForColumnIndex:(int)a0;
- (const char *)UTF8StringForColumn:(id)a0;
- (const char *)UTF8StringForColumnIndex:(int)a0;
- (const char *)UTF8StringForColumnName:(id)a0;
- (BOOL)bindWithArray:(id)a0;
- (BOOL)bindWithArray:(id)a0 orDictionary:(id)a1 orVAList:(char *)a2;
- (BOOL)bindWithDictionary:(id)a0;
- (BOOL)boolForColumn:(id)a0;
- (BOOL)boolForColumnIndex:(int)a0;
- (int)columnIndexForName:(id)a0;
- (BOOL)columnIndexIsNull:(int)a0;
- (BOOL)columnIsNull:(id)a0;
- (id)columnNameForIndex:(int)a0;
- (id)dataForColumn:(id)a0;
- (id)dataNoCopyForColumn:(id)a0;
- (id)dataNoCopyForColumnIndex:(int)a0;
- (id)dateForColumn:(id)a0;
- (double)doubleForColumn:(id)a0;
- (BOOL)hasAnotherRow;
- (int)intForColumn:(id)a0;
- (int)internalStepWithError:(id *)a0;
- (void)kvcMagic:(id)a0;
- (long long)longForColumn:(id)a0;
- (long long)longForColumnIndex:(int)a0;
- (long long)longLongIntForColumn:(id)a0;
- (long long)longLongIntForColumnIndex:(int)a0;
- (BOOL)nextWithError:(id *)a0;
- (id)objectForColumn:(id)a0;
- (id)objectForColumnName:(id)a0;
- (id)resultDict;
- (BOOL)stepWithError:(id *)a0;
- (id)stringForColumn:(id)a0;
- (unsigned long long)unsignedLongLongIntForColumn:(id)a0;
- (unsigned long long)unsignedLongLongIntForColumnIndex:(int)a0;

@end
