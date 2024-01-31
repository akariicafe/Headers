@class NSMutableArray;

@interface PFCloudKitErrorLog : NSObject {
    NSMutableArray *_entries;
}

- (id)init;
- (void)dealloc;
- (id)description;

@end
