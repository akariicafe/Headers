@class UPUsoSerializer;

@interface UPDialogActConverter : NSObject

@property (readonly, copy) UPUsoSerializer *usoSerializer;

- (void).cxx_destruct;
- (id)_parseUserDialogActGraph:(id)a0 error:(id *)a1;
- (id)_convertFromGaveOptionsDialogAct:(id)a0 error:(id *)a1;
- (id)_convertFromOfferedDialogAct:(id)a0 error:(id *)a1;
- (id)_convertFromPromptedDialogAct:(id)a0 error:(id *)a1;
- (id)_parseUserDialogAct:(id)a0 error:(id *)a1;
- (id)convertFromDialogAct:(id)a0 error:(id *)a1;
- (id)initWithUsoSerializer:(id)a0;

@end
