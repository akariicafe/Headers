@interface SiriCoreSQLiteStatement : NSObject {
    struct sqlite3_stmt { } *_impl;
    BOOL _finalizeWhenDone;
}

- (void)reset;
- (void)dealloc;
- (struct sqlite3_stmt { } *)impl;
- (void)clearBindings;
- (id)initWithImpl:(struct sqlite3_stmt { } *)a0 finalizeWhenDone:(BOOL)a1;

@end
