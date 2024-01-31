@interface _STKTextInputObjCStoreFacade : NSObject {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (id)representationsForStickersWithIdentifiers:(id)a0 roles:(id)a1 error:(id *)a2;
- (id)stickersWithIdentifiers:(id)a0 roles:(id)a1 error:(id *)a2;
- (BOOL)touchStickerWithIdentifier:(id)a0 error:(id *)a1;

@end
