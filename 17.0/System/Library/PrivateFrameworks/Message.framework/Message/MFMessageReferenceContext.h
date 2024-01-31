@class NSMutableDictionary, NSArray, EFMutableInt64Set, MFMailMessage, NSSet, ECSubject;
@protocol ECEmailAddressConvertible;

@interface MFMessageReferenceContext : NSObject

@property (retain, nonatomic) MFMailMessage *message;
@property (nonatomic) long long libraryID;
@property (nonatomic) long long messageIDHash;
@property (copy, nonatomic) ECSubject *subject;
@property (retain, nonatomic) EFMutableInt64Set *references;
@property (retain, nonatomic) NSMutableDictionary *messageIDsBySubject;
@property (nonatomic) long long mailboxID;
@property (nonatomic) long long conversationIDHash;
@property (nonatomic) unsigned long long *conversationFlagsRef;
@property (nonatomic) double dateSentInterval;
@property (copy, nonatomic) NSArray *senderList;
@property (copy, nonatomic) NSArray *toList;
@property (copy, nonatomic) NSArray *ccList;
@property (copy, nonatomic) NSArray *bccList;
@property (copy, nonatomic) id<ECEmailAddressConvertible> sender;
@property (copy, nonatomic) id<ECEmailAddressConvertible> to;
@property (copy, nonatomic) id<ECEmailAddressConvertible> cc;
@property (copy, nonatomic) id<ECEmailAddressConvertible> bcc;
@property (readonly, nonatomic) NSSet *participants;

- (void).cxx_destruct;

@end
