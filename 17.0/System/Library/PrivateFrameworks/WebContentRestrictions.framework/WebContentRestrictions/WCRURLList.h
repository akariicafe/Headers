@class NSMutableArray;

@interface WCRURLList : NSObject

@property (retain) NSMutableArray *urlStringList;

+ (id)_formattedStringFromURLString:(id)a0 fromBrowser:(BOOL)a1 removePort:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (void)addURLString:(id)a0;
- (BOOL)containsURLString:(id)a0;

@end
