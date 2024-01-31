@class NSString, NSAttributedString, NSArray;

@interface IMMessagePartDescriptor : NSObject

@property (class, readonly, nonatomic) NSString *defaultPrefix;

@property (nonatomic) BOOL hasLoadedTransferGUID;
@property (readonly, nonatomic) unsigned long long messagePartIndex;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } messagePartRange;
@property (readonly, copy, nonatomic) NSAttributedString *messagePartBody;
@property (readonly, copy, nonatomic) NSString *transferGUID;
@property (readonly, nonatomic) NSArray *links;
@property (readonly, nonatomic) NSArray *mapLocations;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMessagePartBody:(id)a0 messagePartIndex:(unsigned long long)a1 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)isEqualToMessagePart:(id)a0 ignoringRange:(BOOL)a1;
- (id)messagePartGUIDForMessageGUID:(id)a0;

@end
