@class NSString, NSArray;

@interface MFSMTPResponse : NSObject <NSCopying> {
    id _lastResponseLine;
}

@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) unsigned short statusClass : 10;
@property (readonly, nonatomic) unsigned short statusSubject : 10;
@property (readonly, nonatomic) unsigned short statusDetail : 10;
@property (readonly, nonatomic) NSString *statusString;
@property (retain, nonatomic) NSArray *continuationResponses;

- (long long)failureReason;
- (id)description;
- (void).cxx_destruct;
- (void)setStatus:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStatus:(unsigned long long)a0;
- (void)_updateEnhancedStatusCodesFromLastResponse;
- (id)errorMessageWithAddress:(id)a0 defaultMessage:(id)a1;
- (id)lastResponseLine;
- (void)setLastResponseLine:(id)a0;

@end
