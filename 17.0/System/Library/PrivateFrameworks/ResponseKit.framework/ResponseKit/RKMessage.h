@class NSString, NSUUID, NSDate;

@interface RKMessage : RKText

@property (readonly, copy) NSString *title;
@property (readonly, copy) NSUUID *senderUUID;
@property (readonly, copy) NSDate *dateSent;
@property (readonly) unsigned long long position;

- (void).cxx_destruct;
- (void)annotateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 type:(unsigned long long)a1 field:(unsigned long long)a2;
- (id)initWithString:(id)a0 title:(id)a1 languageIdentifier:(id)a2 senderUUID:(id)a3 dateSent:(id)a4 position:(unsigned long long)a5;

@end
