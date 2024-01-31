@class NSString;

@interface MFCalendarComposeRecipient : MFComposeRecipient {
    NSString *_calAttendeeName;
    id _participant;
}

@property (retain, nonatomic) id participant;

- (id)displayString;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithComposeRecipient:(id)a0;
- (void)setCalAttendeeName:(id)a0;

@end
