@class NSData, NSMutableArray, NSNumber;

@interface DreamworksReaderContext : NSObject

@property (retain, nonatomic) NSData *filePurseInfo;
@property (retain, nonatomic) NSMutableArray *filePurse;
@property (retain, nonatomic) NSMutableArray *fileTrans;
@property (retain, nonatomic) NSNumber *balance;
@property (retain, nonatomic) NSNumber *filePurseMaxRecCount;

+ (id)readAllFiles:(id)a0 debug:(BOOL)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)dumpAllFiles;
- (id)readAll:(id)a0 debug:(BOOL)a1 error:(id *)a2;
- (id)readBalance:(id)a0 error:(id *)a1;
- (id)readRecord:(id)a0 sfi:(unsigned char)a1 index:(unsigned char)a2 error:(id *)a3;
- (id)readTransSN:(id)a0 error:(id *)a1;

@end
