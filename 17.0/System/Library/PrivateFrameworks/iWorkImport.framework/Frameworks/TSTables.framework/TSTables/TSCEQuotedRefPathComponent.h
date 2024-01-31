@class NSMutableArray;

@interface TSCEQuotedRefPathComponent : NSObject {
    NSMutableArray *_refPathWords;
}

- (id)description;
- (void).cxx_destruct;
- (id)wordAtIndex:(unsigned long long)a0;
- (unsigned long long)numWords;
- (void)addRefPathWord:(id)a0;
- (void)removeRefPathWordAtIndex:(unsigned long long)a0;
- (id)trimmedStringStartingAtWord:(unsigned long long)a0;
- (id)trimmedStringStartingAtWord:(unsigned long long)a0 withPreserveFlags:(BOOL)a1;

@end
