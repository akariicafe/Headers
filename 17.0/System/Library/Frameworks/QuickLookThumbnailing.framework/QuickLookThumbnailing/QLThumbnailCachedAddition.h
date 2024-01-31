@class GSAddition;

@interface QLThumbnailCachedAddition : NSObject {
    unsigned long long _fileID;
}

@property (retain) GSAddition *addition;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAddition:(id)a0;
- (BOOL)isStillValid;

@end
