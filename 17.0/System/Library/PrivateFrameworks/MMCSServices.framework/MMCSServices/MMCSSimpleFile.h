@class NSString, NSURL, NSData, NSError;

@interface MMCSSimpleFile : NSObject

@property (retain) NSString *guid;
@property unsigned long long itemID;
@property (retain) NSURL *requestURL;
@property (retain) NSString *requestorID;
@property (retain) NSData *signature;
@property (retain) NSString *authToken;
@property (retain) NSString *localPath;
@property int fd;
@property (retain) NSData *fileHash;
@property unsigned long long protocolFileSize;
@property double progress;
@property (retain, setter=setMMCSError:) NSError *mmcsError;
@property long long encryptionBehavior;
@property (retain) NSData *authResponseData;

- (id)init;
- (void)dealloc;
- (id)description;

@end
