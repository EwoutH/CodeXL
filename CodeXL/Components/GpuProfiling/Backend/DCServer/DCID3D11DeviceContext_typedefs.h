//==============================================================================
// Copyright (c) 2015 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief This file is autogenerated
//==============================================================================

#ifndef _DC_ID3D11DEVICECONTEXT_TYPEDEFS_H_
#define _DC_ID3D11DEVICECONTEXT_TYPEDEFS_H_

#include "windows.h"
#include "d3d11.h"

/// \addtogroup DCVirtualTablePatching
// @{

typedef ULONG(WINAPI* ID3D11DeviceContext_Release_type)(ID3D11DeviceContext* pObj);
typedef void (WINAPI* ID3D11DeviceContext_VSSetConstantBuffers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers);
typedef void (WINAPI* ID3D11DeviceContext_PSSetShaderResources_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews);
typedef void (WINAPI* ID3D11DeviceContext_PSSetShader_type)(ID3D11DeviceContext* pObj, ID3D11PixelShader* pPixelShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances);
typedef void (WINAPI* ID3D11DeviceContext_PSSetSamplers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers);
typedef void (WINAPI* ID3D11DeviceContext_VSSetShader_type)(ID3D11DeviceContext* pObj, ID3D11VertexShader* pVertexShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances);
typedef void (WINAPI* ID3D11DeviceContext_DrawIndexed_type)(ID3D11DeviceContext* pObj, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
typedef void (WINAPI* ID3D11DeviceContext_Draw_type)(ID3D11DeviceContext* pObj, UINT VertexCount, UINT StartVertexLocation);
typedef HRESULT(WINAPI* ID3D11DeviceContext_Map_type)(ID3D11DeviceContext* pObj, ID3D11Resource* pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE* pMappedResource);
typedef void (WINAPI* ID3D11DeviceContext_Unmap_type)(ID3D11DeviceContext* pObj, ID3D11Resource* pResource, UINT Subresource);
typedef void (WINAPI* ID3D11DeviceContext_PSSetConstantBuffers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers);
typedef void (WINAPI* ID3D11DeviceContext_IASetInputLayout_type)(ID3D11DeviceContext* pObj, ID3D11InputLayout* pInputLayout);
typedef void (WINAPI* ID3D11DeviceContext_IASetVertexBuffers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppVertexBuffers, const UINT* pStrides, const UINT* pOffsets);
typedef void (WINAPI* ID3D11DeviceContext_IASetIndexBuffer_type)(ID3D11DeviceContext* pObj, ID3D11Buffer* pIndexBuffer, DXGI_FORMAT Format, UINT Offset);
typedef void (WINAPI* ID3D11DeviceContext_DrawIndexedInstanced_type)(ID3D11DeviceContext* pObj, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
typedef void (WINAPI* ID3D11DeviceContext_DrawInstanced_type)(ID3D11DeviceContext* pObj, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
typedef void (WINAPI* ID3D11DeviceContext_GSSetConstantBuffers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers);
typedef void (WINAPI* ID3D11DeviceContext_GSSetShader_type)(ID3D11DeviceContext* pObj, ID3D11GeometryShader* pShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances);
typedef void (WINAPI* ID3D11DeviceContext_IASetPrimitiveTopology_type)(ID3D11DeviceContext* pObj, D3D11_PRIMITIVE_TOPOLOGY Topology);
typedef void (WINAPI* ID3D11DeviceContext_VSSetShaderResources_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews);
typedef void (WINAPI* ID3D11DeviceContext_VSSetSamplers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers);
typedef void (WINAPI* ID3D11DeviceContext_Begin_type)(ID3D11DeviceContext* pObj, ID3D11Asynchronous* pAsync);
typedef void (WINAPI* ID3D11DeviceContext_End_type)(ID3D11DeviceContext* pObj, ID3D11Asynchronous* pAsync);
typedef HRESULT(WINAPI* ID3D11DeviceContext_GetData_type)(ID3D11DeviceContext* pObj, ID3D11Asynchronous* pAsync, void* pData, UINT DataSize, UINT GetDataFlags);
typedef void (WINAPI* ID3D11DeviceContext_SetPredication_type)(ID3D11DeviceContext* pObj, ID3D11Predicate* pPredicate, BOOL PredicateValue);
typedef void (WINAPI* ID3D11DeviceContext_GSSetShaderResources_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews);
typedef void (WINAPI* ID3D11DeviceContext_GSSetSamplers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers);
typedef void (WINAPI* ID3D11DeviceContext_OMSetRenderTargets_type)(ID3D11DeviceContext* pObj, UINT NumViews, ID3D11RenderTargetView* const* ppRenderTargetViews, ID3D11DepthStencilView* pDepthStencilView);
typedef void (WINAPI* ID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews_type)(ID3D11DeviceContext* pObj, UINT NumRTVs, ID3D11RenderTargetView* const* ppRenderTargetViews, ID3D11DepthStencilView* pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView* const* ppUnorderedAccessViews, const UINT* pUAVInitialCounts);
typedef void (WINAPI* ID3D11DeviceContext_OMSetBlendState_type)(ID3D11DeviceContext* pObj, ID3D11BlendState* pBlendState, const FLOAT BlendFactor[ 4 ], UINT SampleMask);
typedef void (WINAPI* ID3D11DeviceContext_OMSetDepthStencilState_type)(ID3D11DeviceContext* pObj, ID3D11DepthStencilState* pDepthStencilState, UINT StencilRef);
typedef void (WINAPI* ID3D11DeviceContext_SOSetTargets_type)(ID3D11DeviceContext* pObj, UINT NumBuffers, ID3D11Buffer* const* ppSOTargets, const UINT* pOffsets);
typedef void (WINAPI* ID3D11DeviceContext_DrawAuto_type)(ID3D11DeviceContext* pObj);
typedef void (WINAPI* ID3D11DeviceContext_DrawIndexedInstancedIndirect_type)(ID3D11DeviceContext* pObj, ID3D11Buffer* pBufferForArgs, UINT AlignedByteOffsetForArgs);
typedef void (WINAPI* ID3D11DeviceContext_DrawInstancedIndirect_type)(ID3D11DeviceContext* pObj, ID3D11Buffer* pBufferForArgs, UINT AlignedByteOffsetForArgs);
typedef void (WINAPI* ID3D11DeviceContext_Dispatch_type)(ID3D11DeviceContext* pObj, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ);
typedef void (WINAPI* ID3D11DeviceContext_DispatchIndirect_type)(ID3D11DeviceContext* pObj, ID3D11Buffer* pBufferForArgs, UINT AlignedByteOffsetForArgs);
typedef void (WINAPI* ID3D11DeviceContext_RSSetState_type)(ID3D11DeviceContext* pObj, ID3D11RasterizerState* pRasterizerState);
typedef void (WINAPI* ID3D11DeviceContext_RSSetViewports_type)(ID3D11DeviceContext* pObj, UINT NumViewports, const D3D11_VIEWPORT* pViewports);
typedef void (WINAPI* ID3D11DeviceContext_RSSetScissorRects_type)(ID3D11DeviceContext* pObj, UINT NumRects, const D3D11_RECT* pRects);
typedef void (WINAPI* ID3D11DeviceContext_CopySubresourceRegion_type)(ID3D11DeviceContext* pObj, ID3D11Resource* pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource* pSrcResource, UINT SrcSubresource, const D3D11_BOX* pSrcBox);
typedef void (WINAPI* ID3D11DeviceContext_CopyResource_type)(ID3D11DeviceContext* pObj, ID3D11Resource* pDstResource, ID3D11Resource* pSrcResource);
typedef void (WINAPI* ID3D11DeviceContext_UpdateSubresource_type)(ID3D11DeviceContext* pObj, ID3D11Resource* pDstResource, UINT DstSubresource, const D3D11_BOX* pDstBox, const void* pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
typedef void (WINAPI* ID3D11DeviceContext_CopyStructureCount_type)(ID3D11DeviceContext* pObj, ID3D11Buffer* pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView* pSrcView);
typedef void (WINAPI* ID3D11DeviceContext_ClearRenderTargetView_type)(ID3D11DeviceContext* pObj, ID3D11RenderTargetView* pRenderTargetView, const FLOAT ColorRGBA[ 4 ]);
typedef void (WINAPI* ID3D11DeviceContext_ClearUnorderedAccessViewUint_type)(ID3D11DeviceContext* pObj, ID3D11UnorderedAccessView* pUnorderedAccessView, const UINT Values[ 4 ]);
typedef void (WINAPI* ID3D11DeviceContext_ClearUnorderedAccessViewFloat_type)(ID3D11DeviceContext* pObj, ID3D11UnorderedAccessView* pUnorderedAccessView, const FLOAT Values[ 4 ]);
typedef void (WINAPI* ID3D11DeviceContext_ClearDepthStencilView_type)(ID3D11DeviceContext* pObj, ID3D11DepthStencilView* pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil);
typedef void (WINAPI* ID3D11DeviceContext_GenerateMips_type)(ID3D11DeviceContext* pObj, ID3D11ShaderResourceView* pShaderResourceView);
typedef void (WINAPI* ID3D11DeviceContext_SetResourceMinLOD_type)(ID3D11DeviceContext* pObj, ID3D11Resource* pResource, FLOAT MinLOD);
typedef FLOAT(WINAPI* ID3D11DeviceContext_GetResourceMinLOD_type)(ID3D11DeviceContext* pObj, ID3D11Resource* pResource);
typedef void (WINAPI* ID3D11DeviceContext_ResolveSubresource_type)(ID3D11DeviceContext* pObj, ID3D11Resource* pDstResource, UINT DstSubresource, ID3D11Resource* pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
typedef void (WINAPI* ID3D11DeviceContext_ExecuteCommandList_type)(ID3D11DeviceContext* pObj, ID3D11CommandList* pCommandList, BOOL RestoreContextState);
typedef void (WINAPI* ID3D11DeviceContext_HSSetShaderResources_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews);
typedef void (WINAPI* ID3D11DeviceContext_HSSetShader_type)(ID3D11DeviceContext* pObj, ID3D11HullShader* pHullShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances);
typedef void (WINAPI* ID3D11DeviceContext_HSSetSamplers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers);
typedef void (WINAPI* ID3D11DeviceContext_HSSetConstantBuffers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers);
typedef void (WINAPI* ID3D11DeviceContext_DSSetShaderResources_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews);
typedef void (WINAPI* ID3D11DeviceContext_DSSetShader_type)(ID3D11DeviceContext* pObj, ID3D11DomainShader* pDomainShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances);
typedef void (WINAPI* ID3D11DeviceContext_DSSetSamplers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers);
typedef void (WINAPI* ID3D11DeviceContext_DSSetConstantBuffers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers);
typedef void (WINAPI* ID3D11DeviceContext_CSSetShaderResources_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews);
typedef void (WINAPI* ID3D11DeviceContext_CSSetUnorderedAccessViews_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView* const* ppUnorderedAccessViews, const UINT* pUAVInitialCounts);
typedef void (WINAPI* ID3D11DeviceContext_CSSetShader_type)(ID3D11DeviceContext* pObj, ID3D11ComputeShader* pComputeShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances);
typedef void (WINAPI* ID3D11DeviceContext_CSSetSamplers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers);
typedef void (WINAPI* ID3D11DeviceContext_CSSetConstantBuffers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers);
typedef void (WINAPI* ID3D11DeviceContext_VSGetConstantBuffers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers);
typedef void (WINAPI* ID3D11DeviceContext_PSGetShaderResources_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews);
typedef void (WINAPI* ID3D11DeviceContext_PSGetShader_type)(ID3D11DeviceContext* pObj, ID3D11PixelShader** ppPixelShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances);
typedef void (WINAPI* ID3D11DeviceContext_PSGetSamplers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers);
typedef void (WINAPI* ID3D11DeviceContext_VSGetShader_type)(ID3D11DeviceContext* pObj, ID3D11VertexShader** ppVertexShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances);
typedef void (WINAPI* ID3D11DeviceContext_PSGetConstantBuffers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers);
typedef void (WINAPI* ID3D11DeviceContext_IAGetInputLayout_type)(ID3D11DeviceContext* pObj, ID3D11InputLayout** ppInputLayout);
typedef void (WINAPI* ID3D11DeviceContext_IAGetVertexBuffers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppVertexBuffers, UINT* pStrides, UINT* pOffsets);
typedef void (WINAPI* ID3D11DeviceContext_IAGetIndexBuffer_type)(ID3D11DeviceContext* pObj, ID3D11Buffer** pIndexBuffer, DXGI_FORMAT* Format, UINT* Offset);
typedef void (WINAPI* ID3D11DeviceContext_GSGetConstantBuffers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers);
typedef void (WINAPI* ID3D11DeviceContext_GSGetShader_type)(ID3D11DeviceContext* pObj, ID3D11GeometryShader** ppGeometryShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances);
typedef void (WINAPI* ID3D11DeviceContext_IAGetPrimitiveTopology_type)(ID3D11DeviceContext* pObj, D3D11_PRIMITIVE_TOPOLOGY* pTopology);
typedef void (WINAPI* ID3D11DeviceContext_VSGetShaderResources_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews);
typedef void (WINAPI* ID3D11DeviceContext_VSGetSamplers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers);
typedef void (WINAPI* ID3D11DeviceContext_GetPredication_type)(ID3D11DeviceContext* pObj, ID3D11Predicate** ppPredicate, BOOL* pPredicateValue);
typedef void (WINAPI* ID3D11DeviceContext_GSGetShaderResources_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews);
typedef void (WINAPI* ID3D11DeviceContext_GSGetSamplers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers);
typedef void (WINAPI* ID3D11DeviceContext_OMGetRenderTargets_type)(ID3D11DeviceContext* pObj, UINT NumViews, ID3D11RenderTargetView** ppRenderTargetViews, ID3D11DepthStencilView** ppDepthStencilView);
typedef void (WINAPI* ID3D11DeviceContext_OMGetRenderTargetsAndUnorderedAccessViews_type)(ID3D11DeviceContext* pObj, UINT NumRTVs, ID3D11RenderTargetView** ppRenderTargetViews, ID3D11DepthStencilView** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView** ppUnorderedAccessViews);
typedef void (WINAPI* ID3D11DeviceContext_OMGetBlendState_type)(ID3D11DeviceContext* pObj, ID3D11BlendState** ppBlendState, FLOAT BlendFactor[ 4 ], UINT* pSampleMask);
typedef void (WINAPI* ID3D11DeviceContext_OMGetDepthStencilState_type)(ID3D11DeviceContext* pObj, ID3D11DepthStencilState** ppDepthStencilState, UINT* pStencilRef);
typedef void (WINAPI* ID3D11DeviceContext_SOGetTargets_type)(ID3D11DeviceContext* pObj, UINT NumBuffers, ID3D11Buffer** ppSOTargets);
typedef void (WINAPI* ID3D11DeviceContext_RSGetState_type)(ID3D11DeviceContext* pObj, ID3D11RasterizerState** ppRasterizerState);
typedef void (WINAPI* ID3D11DeviceContext_RSGetViewports_type)(ID3D11DeviceContext* pObj, UINT* pNumViewports, D3D11_VIEWPORT* pViewports);
typedef void (WINAPI* ID3D11DeviceContext_RSGetScissorRects_type)(ID3D11DeviceContext* pObj, UINT* pNumRects, D3D11_RECT* pRects);
typedef void (WINAPI* ID3D11DeviceContext_HSGetShaderResources_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews);
typedef void (WINAPI* ID3D11DeviceContext_HSGetShader_type)(ID3D11DeviceContext* pObj, ID3D11HullShader** ppHullShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances);
typedef void (WINAPI* ID3D11DeviceContext_HSGetSamplers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers);
typedef void (WINAPI* ID3D11DeviceContext_HSGetConstantBuffers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers);
typedef void (WINAPI* ID3D11DeviceContext_DSGetShaderResources_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews);
typedef void (WINAPI* ID3D11DeviceContext_DSGetShader_type)(ID3D11DeviceContext* pObj, ID3D11DomainShader** ppDomainShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances);
typedef void (WINAPI* ID3D11DeviceContext_DSGetSamplers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers);
typedef void (WINAPI* ID3D11DeviceContext_DSGetConstantBuffers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers);
typedef void (WINAPI* ID3D11DeviceContext_CSGetShaderResources_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews);
typedef void (WINAPI* ID3D11DeviceContext_CSGetUnorderedAccessViews_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView** ppUnorderedAccessViews);
typedef void (WINAPI* ID3D11DeviceContext_CSGetShader_type)(ID3D11DeviceContext* pObj, ID3D11ComputeShader** ppComputeShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances);
typedef void (WINAPI* ID3D11DeviceContext_CSGetSamplers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers);
typedef void (WINAPI* ID3D11DeviceContext_CSGetConstantBuffers_type)(ID3D11DeviceContext* pObj, UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers);
typedef void (WINAPI* ID3D11DeviceContext_ClearState_type)(ID3D11DeviceContext* pObj);
typedef void (WINAPI* ID3D11DeviceContext_Flush_type)(ID3D11DeviceContext* pObj);
typedef UINT(WINAPI* ID3D11DeviceContext_GetContextFlags_type)(ID3D11DeviceContext* pObj);
typedef HRESULT(WINAPI* ID3D11DeviceContext_FinishCommandList_type)(ID3D11DeviceContext* pObj, BOOL RestoreDeferredContextState, ID3D11CommandList** ppCommandList);

// @}

#endif // _DC_ID3D11DEVICECONTEXT_TYPEDEFS_H_