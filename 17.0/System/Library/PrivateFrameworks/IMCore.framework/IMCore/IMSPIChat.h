@class NSString, NSArray;

@interface IMSPIChat : NSObject

@property (retain) NSString *guid;
@property (retain) NSString *chatIdentifier;
@property (retain) NSString *serviceName;
@property (retain) NSString *displayName;
@property BOOL isGroup;
@property (retain) NSArray *handles;
@property (readonly) BOOL isBlackholed;

+ (void)enumerateAllChatsWithBlock:(id /* block */)a0;

- (id)description;
- (void).cxx_destruct;
- (void)enumerateAllAttachmentsWithBlock:(id /* block */)a0;
- (void)enumerateAllMessagesWithBlock:(id /* block */)a0;
- (id)initWithChatRecord:(struct _IMDChatRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct __CFArray *x3; long long x4; struct _IMDMessageRecordStruct *x5; long long x6; } *)a0;

@end
