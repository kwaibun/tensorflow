// This file was autogenerated by print_selective_registration_header.py

constexpr int strcmpc(const char* a, const char* b)
{
  return *a == 0 && *b == 0 ? 0 :
  *a == ' ' ? strcmpc(a+1,b) :
  *b == ' ' ? strcmpc(a,b+1) :
  *a == 0 ? -1 :
  *b == 0 ? 1 :
  *a < *b ? -1 :
  *a > *b ? 1 :
  *a == *b ? strcmpc(a+1, b+1) :
  false;
}

#ifndef OPS_TO_REGISTER
#define OPS_TO_REGISTER
constexpr inline bool ShouldRegisterOp(const char op[]) {
  return false
     || (strcmpc(op, "Add") == 0)
     || (strcmpc(op, "AddN") == 0)
     || (strcmpc(op, "All") == 0)
     || (strcmpc(op, "ApplyGradientDescent") == 0)
     || (strcmpc(op, "ArgMax") == 0)
     || (strcmpc(op, "Assert") == 0)
     || (strcmpc(op, "Assign") == 0)
     || (strcmpc(op, "AssignAdd") == 0)
     || (strcmpc(op, "BiasAdd") == 0)
     || (strcmpc(op, "BiasAddGrad") == 0)
     || (strcmpc(op, "BroadcastGradientArgs") == 0)
     || (strcmpc(op, "Cast") == 0)
     || (strcmpc(op, "ConcatOffset") == 0)
     || (strcmpc(op, "ConcatV2") == 0)
     || (strcmpc(op, "Const") == 0)
     || (strcmpc(op, "ControlTrigger") == 0)
     || (strcmpc(op, "Enter") == 0)
     || (strcmpc(op, "Equal") == 0)
     || (strcmpc(op, "Exit") == 0)
     || (strcmpc(op, "ExpandDims") == 0)
     || (strcmpc(op, "Fill") == 0)
     || (strcmpc(op, "Floor") == 0)
     || (strcmpc(op, "FloorMod") == 0)
     || (strcmpc(op, "Gather") == 0)
     || (strcmpc(op, "GreaterEqual") == 0)
     || (strcmpc(op, "Identity") == 0)
     || (strcmpc(op, "InvertPermutation") == 0)
     || (strcmpc(op, "L2Loss") == 0)
     || (strcmpc(op, "Less") == 0)
     || (strcmpc(op, "LessEqual") == 0)
     || (strcmpc(op, "Log") == 0)
     || (strcmpc(op, "LogicalAnd") == 0)
     || (strcmpc(op, "LogicalNot") == 0)
     || (strcmpc(op, "LogicalOr") == 0)
     || (strcmpc(op, "LoopCond") == 0)
     || (strcmpc(op, "MatMul") == 0)
     || (strcmpc(op, "Max") == 0)
     || (strcmpc(op, "Merge") == 0)
     || (strcmpc(op, "Min") == 0)
     || (strcmpc(op, "Minimum") == 0)
     || (strcmpc(op, "Mul") == 0)
     || (strcmpc(op, "Neg") == 0)
     || (strcmpc(op, "NextIteration") == 0)
     || (strcmpc(op, "NoOp") == 0)
     || (strcmpc(op, "Pack") == 0)
     || (strcmpc(op, "Placeholder") == 0)
     || (strcmpc(op, "PlaceholderWithDefault") == 0)
     || (strcmpc(op, "PreventGradient") == 0)
     || (strcmpc(op, "RandomUniform") == 0)
     || (strcmpc(op, "Range") == 0)
     || (strcmpc(op, "RealDiv") == 0)
     || (strcmpc(op, "RefEnter") == 0)
     || (strcmpc(op, "RefSwitch") == 0)
     || (strcmpc(op, "Reshape") == 0)
     || (strcmpc(op, "RestoreV2") == 0)
     || (strcmpc(op, "SaveV2") == 0)
     || (strcmpc(op, "ScatterSub") == 0)
     || (strcmpc(op, "Select") == 0)
     || (strcmpc(op, "Shape") == 0)
     || (strcmpc(op, "ShapeN") == 0)
     || (strcmpc(op, "Sigmoid") == 0)
     || (strcmpc(op, "SigmoidGrad") == 0)
     || (strcmpc(op, "Size") == 0)
     || (strcmpc(op, "Slice") == 0)
     || (strcmpc(op, "Softmax") == 0)
     || (strcmpc(op, "SparseSoftmaxCrossEntropyWithLogits") == 0)
     || (strcmpc(op, "Split") == 0)
     || (strcmpc(op, "Sqrt") == 0)
     || (strcmpc(op, "Stack") == 0)
     || (strcmpc(op, "StackPop") == 0)
     || (strcmpc(op, "StackPush") == 0)
     || (strcmpc(op, "StridedSlice") == 0)
     || (strcmpc(op, "Sub") == 0)
     || (strcmpc(op, "Sum") == 0)
     || (strcmpc(op, "Switch") == 0)
     || (strcmpc(op, "Tanh") == 0)
     || (strcmpc(op, "TanhGrad") == 0)
     || (strcmpc(op, "TensorArrayGatherV3") == 0)
     || (strcmpc(op, "TensorArrayGradV3") == 0)
     || (strcmpc(op, "TensorArrayReadV3") == 0)
     || (strcmpc(op, "TensorArrayScatterV3") == 0)
     || (strcmpc(op, "TensorArraySizeV3") == 0)
     || (strcmpc(op, "TensorArrayV3") == 0)
     || (strcmpc(op, "TensorArrayWriteV3") == 0)
     || (strcmpc(op, "Tile") == 0)
     || (strcmpc(op, "Transpose") == 0)
     || (strcmpc(op, "VariableV2") == 0)
     || (strcmpc(op, "ZerosLike") == 0)
     || (strcmpc(op, "_Recv") == 0)
     || (strcmpc(op, "_Send") == 0)
  ;
}
#define SHOULD_REGISTER_OP(op) ShouldRegisterOp(op)


    namespace {
      constexpr const char* skip(const char* x) {
        return (*x) ? (*x == ' ' ? skip(x + 1) : x) : x;
      }

      constexpr bool isequal(const char* x, const char* y) {
        return (*skip(x) && *skip(y))
                   ? (*skip(x) == *skip(y) && isequal(skip(x) + 1, skip(y) + 1))
                   : (!*skip(x) && !*skip(y));
      }

      template<int N>
      struct find_in {
        static constexpr bool f(const char* x, const char* const y[N]) {
          return isequal(x, y[0]) || find_in<N - 1>::f(x, y + 1);
        }
      };

      template<>
      struct find_in<0> {
        static constexpr bool f(const char* x, const char* const y[]) {
          return false;
        }
      };
    }  // end namespace
    constexpr const char* kNecessaryOpKernelClasses[] = {
"BinaryOp< CPUDevice, functor::add<float>>",
"BinaryOp< CPUDevice, functor::add<int32>>",
"AddNOp< CPUDevice, float>",
"ReductionOp<CPUDevice, bool, Eigen::internal::AndReducer>",
"ApplyGradientDescentOp<CPUDevice, float>",
"ArgMaxOp<CPUDevice, float>",
"AssertOp",
"AssignOpT<CPUDevice, ::tensorflow::int32>",
"AssignOpT<CPUDevice, float>",
"DenseUpdateOp<CPUDevice, ::tensorflow::int32, DenseUpdateType::ADD>",
"BiasOp<CPUDevice, float>",
"BiasGradOp<CPUDevice, float>",
"BCastGradArgsOp",
"CpuCastOp",
"ConcatOffsetOp",
"ConcatV2Op<CPUDevice, ::tensorflow::int32>",
"ConcatV2Op<CPUDevice, float>",
"ConstantOp",
"ControlTriggerOp",
"EnterOp",
"BinaryOp< CPUDevice, functor::equal_to<int32>>",
"ExitOp",
"ExpandDimsOp",
"FillOp<CPUDevice, ::tensorflow::int32>",
"FillOp<CPUDevice, float>",
"UnaryOp< CPUDevice, functor::floor<float>>",
"BinaryOp< CPUDevice, functor::safe_floor_mod<int32>>",
"GatherOp<CPUDevice, float, int32>",
"BinaryOp< CPUDevice, functor::greater_equal<int32>>",
"IdentityOp",
"InvertPermutationOp",
"L2LossOp<CPUDevice, float>",
"BinaryOp< CPUDevice, functor::less<int32>>",
"BinaryOp< CPUDevice, functor::less_equal<int32>>",
"UnaryOp< CPUDevice, functor::log<float>>",
"BinaryOp<CPUDevice, functor::logical_and>",
"UnaryOp<CPUDevice, functor::logical_not>",
"BinaryOp<CPUDevice, functor::logical_or>",
"LoopCondOp",
"MatMulOp<CPUDevice, float, false >",
"ReductionOp<CPUDevice, ::tensorflow::int32, Eigen::internal::MaxReducer<::tensorflow::int32>>",
"MergeOp",
"ReductionOp<CPUDevice, ::tensorflow::int32, Eigen::internal::MinReducer<::tensorflow::int32>>",
"BinaryOp< CPUDevice, functor::minimum<float>>",
"BinaryOp< CPUDevice, functor::mul<float>>",
"UnaryOp< CPUDevice, functor::neg<float>>",
"NextIterationOp",
"NoOp",
"PackOp<CPUDevice, ::tensorflow::int32>",
"PackOp<CPUDevice, float>",
"PlaceholderOp",
"IdentityOp",
"PhiloxRandomOp<CPUDevice, random::UniformDistribution< random::PhiloxRandom, float> >",
"RangeOp<::tensorflow::int32>",
"BinaryOp< CPUDevice, functor::div<float>>",
"EnterOp",
"SwitchOp",
"ReshapeOp",
"RestoreV2",
"SaveV2",
"ScatterUpdateOp< CPUDevice, float, int32, scatter_op::UpdateOp::SUB>",
"SelectOp<CPUDevice, ::tensorflow::int32>",
"SelectOp<CPUDevice, float>",
"ShapeOp<int32>",
"ShapeNOp<int32>",
"UnaryOp< CPUDevice, functor::sigmoid<float>>",
"SimpleBinaryOp< CPUDevice, functor::sigmoid_grad<float>>",
"SizeOp<int32>",
"SliceOp<CPUDevice, ::tensorflow::int32>",
"SliceOp<CPUDevice, float>",
"SoftmaxOp<CPUDevice, float>",
"SparseSoftmaxXentWithLogitsOp<CPUDevice, float, int32>",
"SplitOpCPU<float>",
"UnaryOp< CPUDevice, functor::sqrt<float>>",
"StackOp",
"StackPopOp",
"StackPushOp<CPUDevice>",
"StridedSliceOp<CPUDevice, ::tensorflow::int32>",
"StridedSliceOp<CPUDevice, float>",
"BinaryOp< CPUDevice, functor::sub<float>>",
"BinaryOp< CPUDevice, functor::sub<int32>>",
"ReductionOp<CPUDevice, float, Eigen::internal::SumReducer<float>>",
"SwitchOp",
"UnaryOp< CPUDevice, functor::tanh<float>>",
"SimpleBinaryOp< CPUDevice, functor::tanh_grad<float>>",
"TensorArrayPackOrGatherOp<CPUDevice, ::tensorflow::int32, false >",
"TensorArrayPackOrGatherOp<CPUDevice, float, false >",
"TensorArrayGradOp",
"TensorArrayReadOp<CPUDevice, float>",
"TensorArrayUnpackOrScatterOp<CPUDevice, float, false >",
"TensorArraySizeOp",
"TensorArrayOp",
"TensorArrayWriteOp<CPUDevice, ::tensorflow::int32>",
"TensorArrayWriteOp<CPUDevice, float>",
"TileOp<CPUDevice>",
"TransposeCpuOp",
"VariableOp",
"ZerosLikeOp< CPUDevice, float>",
"RecvOp",
"SendOp",
};
#define SHOULD_REGISTER_OP_KERNEL(clz) (find_in<sizeof(kNecessaryOpKernelClasses) / sizeof(*kNecessaryOpKernelClasses)>::f(clz, kNecessaryOpKernelClasses))

#define SHOULD_REGISTER_OP_GRADIENT false
#endif
