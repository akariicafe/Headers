@class NSString;

@interface QueryRewriter : NSObject {
    struct unique_ptr<marrs::qr::orchestration::QRPredictor, std::default_delete<marrs::qr::orchestration::QRPredictor>> { struct __compressed_pair<marrs::qr::orchestration::QRPredictor *, std::default_delete<marrs::qr::orchestration::QRPredictor>> { struct QRPredictor *__value_; } __ptr_; } _plugin;
    NSString *_predictorName;
    int _predictorType;
}

@property (retain, nonatomic) NSString *locale;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 filesPath:(id)a1 predictorType:(int)a2 status:(id *)a3;
- (id)predictWithInput:(id)a0 status:(id *)a1;

@end
