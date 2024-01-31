@class NSMutableArray;

@interface UMLogMessage : NSObject {
    NSMutableArray *_publicStrings;
    NSMutableArray *_privateStrings;
}

- (id)init;
- (void).cxx_destruct;

@end
