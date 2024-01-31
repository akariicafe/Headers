@class NSUUID, NSString, NSURL, NSDate;

@interface VMMutableVoicemail : VMVoicemail

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long remoteUID;
@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *senderDestinationID;
@property (retain, nonatomic) NSString *senderISOCountryCode;
@property (retain, nonatomic) NSString *callbackDestinationID;
@property (retain, nonatomic) NSString *callbackISOCountryCode;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSURL *dataURL;
@property (retain, nonatomic) NSString *receiverDestinationID;
@property (retain, nonatomic) NSString *receiverISOCountryCode;
@property (retain, nonatomic) NSString *receiverLabelID;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, getter=isRead) BOOL read;
@property (retain, nonatomic) NSURL *transcriptionURL;
@property (nonatomic, getter=isTrashed) BOOL trashed;


@end
