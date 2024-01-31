@interface AlgosConnectionScore : NSObject {
    void *connectionData;
}

@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) BOOL debug;

+ (id)connectionScore;

- (id)init;
- (void)dealloc;
- (void)addConnectionRow:(unsigned long long)a0 ttfb:(double)a1 ttlb:(double)a2 basettfb:(double)a3 basettlb:(double)a4 weight:(double)a5 failed:(int)a6;
- (id)scoreConnection:(BOOL)a0 label:(id)a1;
- (void)clearConnectionRows;

@end
