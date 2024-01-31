@class NSString, NSItemProvider;

@interface PHPickerResult : NSObject

@property (readonly, nonatomic) long long _sourceType;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) NSString *assetIdentifier;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithItemProvider:(id)a0 assetIdentifier:(id)a1;
- (id)_initWithItemProvider:(id)a0 itemIdentifier:(id)a1 sourceType:(long long)a2;

@end
