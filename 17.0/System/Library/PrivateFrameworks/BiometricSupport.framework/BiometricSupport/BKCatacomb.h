@class NSString, NSDictionary;

@interface BKCatacomb : NSObject {
    NSDictionary *_writeAttributes;
}

@property (readonly, copy, nonatomic) NSString *catacombDir;

+ (id)catacombWithDir:(id)a0;

- (int)deleteAll;
- (int)recover;
- (int)readData:(id *)a0 fromFile:(id)a1 logString:(id *)a2;
- (id)init;
- (id)content;
- (int)deleteFile:(id)a0;
- (int)readData:(id *)a0 fromFile:(id)a1;
- (id)catacombCommitDir;
- (int)syncDir:(id)a0;
- (void).cxx_destruct;
- (int)commitWrite;
- (id)catacombPrepareDir;
- (int)writeData:(id)a0 toFile:(id)a1;

@end
