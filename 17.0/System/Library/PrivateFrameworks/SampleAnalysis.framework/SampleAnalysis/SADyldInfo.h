@class NSUUID, SATask, NSMutableString;

@interface SADyldInfo : NSObject {
    BOOL _isSharedCache;
    BOOL _dyldInfoIsComplete;
    BOOL _pathIsComplete;
    SATask *_task;
    NSUUID *_uuid;
    unsigned long long _loadAddress;
    unsigned long long _stringID;
    NSMutableString *_path;
}

- (void).cxx_destruct;
- (id)debugDescription;

@end
