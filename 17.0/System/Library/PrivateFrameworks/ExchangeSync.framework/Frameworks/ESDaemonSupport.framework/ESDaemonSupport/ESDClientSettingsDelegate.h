@class DAOofParams;

@interface ESDClientSettingsDelegate : ESDClientDelegate <ESSettingsResponseDelegate>

@property (nonatomic) BOOL isUpdate;
@property (retain, nonatomic) DAOofParams *requestParams;
@property (retain, nonatomic) DAOofParams *responseParams;

- (void)dealloc;
- (void)disable;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (BOOL)isOofSupported;
- (void)settingsRequestFinishedWithResults:(id)a0 status:(long long)a1 error:(id)a2;
- (void)beginSettingsRequest;
- (id)initWithAccountID:(id)a0 requestDictionary:(id)a1 forUpdate:(BOOL)a2 client:(id)a3;

@end
