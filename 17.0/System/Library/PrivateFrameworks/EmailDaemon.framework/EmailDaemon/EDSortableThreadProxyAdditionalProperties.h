@class NSArray, ECMessageFlags, NSIndexSet, NSDate;

@interface EDSortableThreadProxyAdditionalProperties : NSObject

@property (nonatomic) unsigned long long numberOfMessagesInThread;
@property (nonatomic) long long displayMessageGlobalID;
@property (nonatomic) BOOL hasUnflagged;
@property (nonatomic) BOOL isVIP;
@property (nonatomic) BOOL isBlocked;
@property (nonatomic) BOOL hasAttachments;
@property (nonatomic) long long senderBucket;
@property (retain, nonatomic) NSDate *readLaterDate;
@property (copy, nonatomic) NSArray *senderList;
@property (copy, nonatomic) NSArray *toList;
@property (copy, nonatomic) NSArray *ccList;
@property (retain, nonatomic) ECMessageFlags *flags;
@property (copy, nonatomic) NSIndexSet *flagColors;
@property (retain, nonatomic) NSArray *mailboxObjectIDs;

- (void).cxx_destruct;

@end
