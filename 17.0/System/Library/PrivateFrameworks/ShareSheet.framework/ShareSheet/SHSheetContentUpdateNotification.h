@class LPLinkMetadata;

@interface SHSheetContentUpdateNotification : BSAction

@property (readonly, nonatomic) LPLinkMetadata *headerMetadata;
@property (readonly, nonatomic) BOOL didUpdateDataSource;

- (id)initWithHeaderMetadata:(id)a0 didUpdateDataSource:(BOOL)a1;

@end
